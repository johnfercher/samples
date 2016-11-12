/*
 *	MIT License
 *
 *	Copyright (c) 2016 Johnathan Fercher
 *
 *	Permission is hereby granted, free of charge, to any person obtaining a copy
 *	of this software and associated documentation files (the "Software"), to deal
 *	in the Software without restriction, including without limitation the rights
 *	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *	copies of the Software, and to permit persons to whom the Software is
 *	furnished to do so, subject to the following conditions:
 *
 *	The above copyright notice and this permission notice shall be included in all
 *	copies or substantial portions of the Software.
**/

#[derive(Debug)]                                    // derives from Debug. allows to {:?} the struct
struct Point2 {
    x: f64,
    y: f64,
}

impl Point2 {                                       // impl of the class Point2
    pub fn origin() -> Point2 {                     // makes a new point in origin
        Point2 {
            x: 0.0,
            y: 0.0
        }
    }

    pub fn new(x: f64, y: f64) -> Point2 {          // makes a new point where you want
        Point2 {
            x: x,
            y: y
        }
    }

    pub fn distance_to(&self, p: Point2) -> f64 {   // calc the distance of the point to another point
        return ((self.x - p.x)*(self.x - p.x) + (self.y - p.y)*(self.y - p.y)).sqrt();
    }
}

fn main() {
    let mut point_origin: Point2 = Point2::origin();
    println!("{:?}", point_origin);

    let mut point: Point2 = Point2::new(10.0, 10.0);
    println!("{:?}", point);

    let mut distance = point_origin.distance_to(point);
    println!("distance: {}", distance as f32);
}