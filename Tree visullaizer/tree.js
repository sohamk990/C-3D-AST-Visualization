import * as THREE from 'https://cdn.jsdelivr.net/npm/three@0.118/build/three.module.js';
export default class TREE
{
    constructor(scene)
    {
        this.text = [87,1,1,1,2,1,3,3,4,7,11,1,5,1,6,0,1,8,1,9,1,10,0,2,12,47,1,13,2,14,17,1,15,1,16,0,1,18,2,19,22,1,20,1,21,0,1,23,1,24,1,25,1,26,1,27,1,28,1,29,1,30,1,31,1,32,1,33,2,34,41,1,35,1,36,1,37,1,38,1,39,1,40,0,1,42,1,43,1,44,1,45,1,46,0,1,48,1,49,1,50,1,51,1,52,1,53,1,54,1,55,1,56,1,57,1,58,1,59,1,60,1,61,1,62,1,63,1,64,1,65,2,66,69,1,67,1,68,0,1,70,1,71,1,72,1,73,1,74,1,75,1,76,1,77,1,78,1,79,1,80,1,81,1,82,1,83,1,84,1,85,1,86,0];
        this.value = ['source_code', 'translation_unit', 'external_declaration', 'function_definition', 'declaration_specifiers', 'type_specifier', 'int', 'declarator', 'direct_declarator', 'direct_declarator', 'main', 'compound_statement', 'declaration_list', 'declaration', 'declaration_specifiers', 'type_specifier', 'int', 'init_declarator_list', 'init_declarator', 'declarator', 'direct_declarator', 'x', 'initializer', 'assignment_expression', 'conditional_expression', 'logical_or_expression', 'logical_and_expression', 'inclusive_or_expression', 'exclusive_or_expression', 'and_expression', 'equality_expression', 'relational_expression', 'shift_expression', 'additive_expression +', 'additive_expression', 'multiplicative_expression', 'cast_expression', 'unary_expression', 'postfix_expression', 'primary_expression', 'a', 'multiplicative_expression', 'cast_expression', 'unary_expression', 'postfix_expression', 'primary_expression', 'b', 'statement_list', 'statement', 'expression_statement', 'expression', 'assignment_expression', 'conditional_expression', 'logical_or_expression', 'logical_and_expression', 'inclusive_or_expression', 'exclusive_or_expression', 'and_expression', 'equality_expression', 'relational_expression', 'shift_expression', 'additive_expression', 'multiplicative_expression', 'cast_expression', 'unary_expression', 'postfix_expression', 'postfix_expression', 'primary_expression', 'printf', 'assignment_expression_list', 'assignment_expression', 'conditional_expression', 'logical_or_expression', 'logical_and_expression', 'inclusive_or_expression', 'exclusive_or_expression', 'and_expression', 'equality_expression', 'relational_expression', 'shift_expression', 'additive_expression', 'multiplicative_expression', 'cast_expression', 'unary_expression', 'postfix_expression', 'primary_expression', '"hello world\n"'];
        this.tree = [];
        this.N=this.text[0];
        let temptree = [];
        let tmp = [];
        for (let i=1;i<this.text.length;i++)
        {
            let j = this.text[i];
            tmp = [];
            i++;
            for(let k=0;k<j;k++)
            {
                tmp.push(Number(this.text[i]));                
                i++;
            }
            // tmp = new Float32Array(tmp);
            // this.tree.push(tmp);
            // this.tree.push.apply(this.tree,tmp);
            // console.log(tmp);
            temptree.push(new Float32Array([...tmp]));
            // console.log("LENGTH: ",j,tmp.length,temptree[temptree.length-1].length);
            // console.log(this.tree);
            // this.tree.push([...tmp]);

            i--;
        }
        
        
        this.tree=temptree;
    
        this.height = 0.0;
        this.height_array = [];
        this.X = []
        this.Y = []
        this.height_diameter = [];
        this.X_pos=0.0;
        // console.log(this.N)
        // console.log(this.tree)
        // console.log(this.value.length)
        
        for(let i=0;i<this.tree.length;i++)
        {
            this.height_array.push(0);
        }

        // console.log(this.height_array);
        // console.log(this.tree.length);
        this.calculate_height(0);

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
        this.mode=0
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
    calculate_height(index)
    {
        for (let i=0;i<this.tree[index].length;i++)
        {
            if(this.tree[index][i]!=0)
            {
                this.height_array[this.tree[index][i]]=this.height_array[index]+1;
                this.calculate_height(this.tree[index][i]);
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
            this.X_pos-=50;
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
        loader.load( './helvetiker_bold.typeface.json', function ( font )
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