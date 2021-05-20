import * as THREE from 'https://cdn.jsdelivr.net/npm/three@0.118/build/three.module.js';
import  {OrbitControls}  from 'https://cdn.jsdelivr.net/npm/three@0.118/examples/jsm/controls/OrbitControls.js';

import TREE from './tree.js'


function main() 
{
	let scene,camera,light,controls;
	var renderer = new THREE.WebGLRenderer({antialias: true});
	scene = new THREE.Scene();

		
	renderer.setClearColor('black');
	renderer.setSize(window.innerWidth, window.innerHeight);
	renderer.setPixelRatio(window.devicePixelRatio);
	renderer.shadowMap.enabled = true;
	document.body.appendChild(renderer.domElement);

	//CAMERA
	camera = new THREE.PerspectiveCamera(120, window.innerWidth / window.innerHeight, 1e-3, 1e5);
	// camera.position.x = -100;
	// camera.position.y = 100;
	camera.position.z = 100;

	//CONTROLS
	controls = new OrbitControls(camera, renderer.domElement);
	controls.target.set(0, 0, 0);
	controls.update();

	// LIGHT
	light = new THREE.AmbientLight('white');
	scene.add(light);
	window.addEventListener("keydown", (kp)=>
	{
		var code = kp.key;
		console.log(code);
		if(code=="s" || code=="S")
		{
			t.togglemode(scene);
		}
	});

	let t = new TREE(scene);
	
	function resizeRendererToDisplaySize(renderer) 
	{
		const canvas = renderer.domElement;
		const width = canvas.clientWidth;
		const height = canvas.clientHeight;
		const needResize = canvas.width !== width || canvas.height !== height;
		if (needResize) 
		{
			renderer.setSize(width, height, false);
		}
		return needResize;
	}
	
	window.addEventListener('resize', () => {
		renderer.setSize(window.innerWidth,window.innerHeight);
		camera.aspect = window.innerWidth / window.innerHeight;
	
		camera.updateProjectionMatrix();
	})

	var render = function() 
	{
		requestAnimationFrame(render);	
		renderer.render(scene, camera);
	}
	render();

}
main();