//
//  DetailViewController.h
//  TestGradle
//
//  Created by Julio Rivas on 2/3/15.
//  Copyright (c) 2015 Julio Rivas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

