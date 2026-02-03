use std::io;
fn main() {
    let mut user_num1: String = String::new();
    let mut user_num2: String = String::new();
    println!("Enter your first integer");
    io::stdin().read_line(&mut user_num1).expect("Input Error");
    let user_num1: i32 = user_num1.trim().parse().expect("Not an Int");
    println!("Enter your second integer");
    io::stdin().read_line(&mut user_num2).expect("Input Error");
    let user_num2: i32 = user_num2.trim().parse().expect("Not an Int");
    let sum :i64 = (user_num1 + user_num2).into();
    println!("{} + {} = {}", user_num1,user_num2,sum);

    
}
