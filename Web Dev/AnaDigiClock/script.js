setInterval(() => {
    let d = new Date();
    let hr = d.getHours() % 12 || 12; // Convert 24-hour format to 12-hour format
    let min = d.getMinutes();
    let sec = d.getSeconds();
    let ampm = (d.getHours() < 12) ? "AM" : "PM"; // Determine AM or PM
    
    let hr_rotation = 30 * hr + min / 2;
    let min_rotation = 6 * min;
    let sec_rotation = 6 * sec;
    
    hour.style.transform = `rotate(${hr_rotation}deg)`;
    minute.style.transform = `rotate(${min_rotation}deg)`;
    second.style.transform = `rotate(${sec_rotation}deg)`;
    
    hour.innerHTML = hr + " " + ampm; // Display hour with AM/PM
    minute.innerHTML = min < 10 ? '0' + min : min;
    second.innerHTML = sec < 10 ? '0' + sec : sec;
}, 1000);
