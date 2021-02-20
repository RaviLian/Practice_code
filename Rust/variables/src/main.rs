const MAX_POINTS:u32 = 100_000;

fn main() {
    println!("The const is {}", MAX_POINTS);
    let x = 5;
    println!("The i32 value of x is {}", x);
    let mut y = 10;
    println!("Before: The mut y is {}", y);
    y = 11;
    println!("After: The mut y is {}", y);

    //shadow
    let a = 10;
    let a = a + 2; //12
    let a = a * 2; //24
    println!("shadow a is {}", a);

    //使用shadow改变同名变量的类型
    //而使用mut关键字则会导致不同类型不可赋值而报错
    let spaces = "      ";
    let spaces = spaces.len();
    println!("the spaces is {}", spaces);

    // 编译器必须知道某种变量类型的具体类型，如string转换整型要告知i32 or u32
    let guess:u32 = "442".parse().expect("Not a number");
    println!("guess is {}",guess);

    // rust有标量类型和复合类型
    // 标量1:整数类型
    let s32:isize = 100;
    println!("{}", s32);
    // 2.浮点数 默认为f64
    // 3. 布尔型 true or false
    // 4. char类型 4字节 代表一个unicode
    let c = 'z';
    let z = 'ℤ';
    let heart_eyed_cat = '😻';
    println!("{},{},{}",c,z,heart_eyed_cat);

    //复合类型Compound types
    // Rust 有两个原生的复合类型：元组（tuple）和数组（array）
    // tuple
    let tup: (i32, f64, char) = (100, 1.2, 'k');
    //解构
    let (z, x, c) = tup;
    println!("{} {} {}", tup.0, tup.1, tup.2);
    println!("{} {} {}", z, x, c);
    
    //array
    //数组是一整块分配在栈上的内存。可以使用索引来访问数组的元素
    //let a = [1, 2, 3, 4, 5];
    let a: [i32; 5] = [1, 2, 3, 4, 5];
    println!("{}", a[0]);
    let a = [3; 5];
    //let a = [3, 3, 3, 3, 3];
    println!("{}", a[0]);
    //使用数组，程序不大可能会去增加或减少月份,它总是包含 12 个元素：
    let months = ["January", "February", "March", "April", "May", "June", "July",
              "August", "September", "October", "November", "December"]; //[&str; 12]
    let m1 = months[0];
    println!("{}", m1);
}
