import * as THREE from 'https://cdn.jsdelivr.net/npm/three@0.118/build/three.module.js';
export default class TREE
{
    constructor(scene)
    {
        this.text = [13,
            3, 1, 2, 3,
            3, 4, 5, 6,
            3, 7, 8, 9,
            3, 10, 11, 12,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        ]
        this.tree=[];
        for (let i=1;i<this.text.length;i++)
        {
            let j = this.text[i];
            let tmp=[];
            i++;
            for(let k=0;k<j;k++)
            {
                tmp.push(this.text[i]);
                i++;
            }
            this.tree.push(new Float32Array([...tmp]));
            i--;
        }
        this.value = ['1234567890','1234567890','1234567890','1234567890','1234567890','1234567890','1234567890','1234567890','1234567890','1234567890','1234567890','1234567890','1234567890'];
        // this.tree = [
        //     new Float32Array([1,2,3]),
        //     new Float32Array([4,5,6]),
        //     new Float32Array([7,8,9]),
        //     new Float32Array([10,11,12]),
        //     new Float32Array([]),
        //     new Float32Array([]),
        //     new Float32Array([]),
        //     new Float32Array([]),
        //     new Float32Array([]),
        //     new Float32Array([]),
        //     new Float32Array([]),
        //     new Float32Array([]),
        //     new Float32Array([])
        // ];


        this.height = 0.0;
        this.height_array = [];
        this.X = []
        this.Y = []
        this.height_diameter = [];
        this.X_pos=0.0;

        for(let i=0;i<this.tree.length;i++)
        {
            this.height_array.push(0);
        }

        // console.log(this.height_array);
        // console.log(this.tree.length);
        this.calculate_height(this.tree,0);

        // console.log(this.height_array);
        this.height_array = new Float32Array([...this.height_array]);
        // console.log(this.height_array);
        this.height = Math.max(...this.height_array);
        // console.log(this.height)

        for(let i=0;i<=this.height;i++)
        {
            this.height_diameter.push(0);
        }
        
        // console.log(this.height_diameter)
        this.height_diameter = new Float32Array([...this.height_diameter]);
        
        for(let i=0;i<this.height_array.length;i++)
        {
            this.height_diameter[this.height_array[i]]++;
        }
        // console.log(this.height_diameter)

        this.getY();
        this.getX(0);
        // console.log("ZXXX");
        // console.log(this.X);
        
        for(let i=0;i<this.X.length;i++)
        {
            if(this.mode==0)
            {
                this.add_text(scene,this.value[i],this.X[i],this.Y[i]);
            }
            else
            {
                this.add_sphere(scene,this.X[i],this.Y[i]);
            }
        }
        this.drawlines(scene,0);
    }

    drawlines(scene,pi)
    {
        for(let i=0;i<this.tree[pi].length;i++)
        {
            this.add_line(scene,this.X[pi],this.Y[pi],this.X[this.tree[pi][i]],this.Y[this.tree[pi][i]]);
            this.drawlines(scene,this.tree[pi][i]);
        }
    }
    calculate_height(tree,index)
    {
        for (let i=0;i<tree[index].length;i++)
        {
            if(tree[index][i]!=0)
            {
                // console.log(tree[index][i]);
                this.height_array[tree[index][i]]=this.height_array[index]+1;
                this.calculate_height(tree,tree[index][i]);
            }            
        }
    }

    getY()
    {
        for(let i=0;i<this.height_array.length;i++)
        {
            this.Y.push(30*(this.height-this.height_array[i]));
            this.X.push(1);
        }
        // console.log(this.Y);
    }


    getX(index)
    {
        if(this.X[index] != 1)
        {
            return this.X[index];
        }

        else if(this.tree[index].length==0)
        {
            this.X[index]=this.X_pos;
            this.X_pos-=30;
            // console.log("Index: ",index, "Position: ", this.X[index])
            return this.X[index];
        }
        else
        {
            let avg=parseFloat(0.0);
            for (let i=this.tree[index].length-1;i>=0;i--)
            {
                let h = parseFloat(this.getX(this.tree[index][i]));
                // console.log("Index",index,this.tree[index][i],h);
                avg+=parseFloat(h);
            }
            avg=parseFloat(avg/this.tree[index].length);
            this.X[index]=parseFloat(avg);
            // console.log("Index: ",index, "Position: ", this.X[index],"Average" ,avg)
            return this.X[index];
        }
    }

    add_line(scene,X1,Y1,X2,Y2)
    {
        const material = new THREE.LineBasicMaterial( { color: "red" ,linewidth: 5 } );
        const points = [];
        points.push( new THREE.Vector3( X1,Y1, 0 ) );
        points.push( new THREE.Vector3( X2,Y2, 0 ) );
        const geometry = new THREE.BufferGeometry().setFromPoints( points );
        const line = new THREE.Line( geometry, material );
        scene.add( line );
    }


    add_text(scene,text,X,Y)
    {
        const loader = new THREE.FontLoader();
        loader.load( 'THREE/examples/fonts/helvetiker_bold.typeface.json', function ( font )
        {
            const textGeo = new THREE.TextGeometry( text,
            {
                font: font,
                size: 2.0,
                height: 0.25,
                curveSegments: 12,
                bevelThickness: 1,
                bevelSize: 0.5,
                bevelEnabled: false
            } );

            textGeo.computeBoundingBox();
            const textMaterial = new THREE.MeshPhongMaterial( { color: 'green', specular: 0xffffff } );
            const mesh = new THREE.Mesh( textGeo, textMaterial );
            mesh.position.x = X;
            mesh.position.y = Y;
            mesh.castShadow = true;
            mesh.receiveShadow = true;
            scene.add(mesh);
        } );
    }


    add_sphere(scene,X,Y)
    {
        const geometry = new THREE.SphereGeometry( 5, 32, 32 );
        // const material = new THREE.MeshPhongMaterial( {color: 'green'} );
        const material = new THREE.MeshLambertMaterial( {color: 'green'} );
        const sphere = new THREE.Mesh( geometry, material );
        sphere.position.x=X;
        sphere.position.y=Y;
        scene.add( sphere );
    }      

    togglemode(scene)
    {
        if (this.mode==0)
        {
            this.mode=1;
        }
        else
        {
            this.mode=0;
        }
        for(let i=0;i<this.X.length;i++)
        {
            if(this.mode==0)
            {
                this.add_text(scene,this.value[i],this.X[i],this.Y[i]);
            }
            else
            {
                this.add_sphere(scene,this.X[i],this.Y[i]);
            }
        }
        this.drawlines(scene,0);
    }
}