//
//  ViewController.h
//  ThreadTestApp
//
//  Created by Bsetecip10 on 26/11/14.
//  Copyright (c) 2014 gyana. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    NSOperationQueue *operationQueue;
}
@property (weak, nonatomic) IBOutlet UILabel *lable1;

@property (weak, nonatomic) IBOutlet UILabel *lable2;
@property (weak, nonatomic) IBOutlet UILabel *lable3;
- (IBAction)applyBackgroundColor1:(UIButton *)sender;
- (IBAction)applyBackgroundColor2:(UIButton *)sender;
- (IBAction)applyBackgroundColor3:(UIButton *)sender;

-(void)counterTask;
-(void)colorRotatorTask;

@property (weak, nonatomic) IBOutlet UIButton *btm1;
@property (weak, nonatomic) IBOutlet UIButton *btm2;
@property (weak, nonatomic) IBOutlet UIButton *btm3;

@end

