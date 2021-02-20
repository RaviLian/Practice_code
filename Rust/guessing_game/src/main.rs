use std::io;
use rand::Rng;
use std::cmp::Ordering;
fn main() {
    

    let secret_number = rand::thread_rng().gen_range(1, 101);
    println!("神秘数字是: {}", secret_number);

    loop {
        println!("猜测一个数字");

        let mut guess = String::new(); //mut表示变量的值可变
        io::stdin().read_line(&mut guess).expect("无法读取行");//引用默认不可变，故也需要mut关键字
        //io::Result Ok, Err

        //shadow 允许复用该变量
        //let guess:u32 = guess.trim().parse().expect("type a number");
        let guess:u32 = match guess.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };
        println!("你猜测的数字是:{}", guess);
        match guess.cmp(&secret_number) {
            Ordering::Less => println!("Too small!"), //arm
            Ordering::Greater => println!("Too big!"),
            Ordering::Equal => {
                println!("You win!");
                break;
            },
        }
    }
}
