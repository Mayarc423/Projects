use std::time::{SystemTime, UNIX_EPOCH};

fn get_time() -> SystemTime
{
    return SystemTime::now;
}
fn main() {
    let now = get_time();
    let duration_since_unix_epoch = now.duration_since(UNIX_EPOCH);

    println!("The current time is {}", duration_since_unix_epoch);
}
