//
//  FTDetailViewController.h
//  Fringtones
//
//  Created by Alex Agarkov on 4/7/14.
//  Copyright (c) 2014 Alex Agarkov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FTDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
