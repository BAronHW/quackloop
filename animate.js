function animate(){
    const frames = [ "    __\n<(o )___\n (    \"  )\n  `----' \n", "    __\n<(o )___\n (    \"  ) Quack!\n  `----' \n", "    __\n<(o )___\n (    \"  )\n  `----' \n"];
    let index = 0;
    setInterval(()=>{
        console.clear();
        console.log(frames[index]);
        index = (index + 1) % frames.length;
    },500);
}


animate();