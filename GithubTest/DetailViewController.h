//
//  DetailViewController.h
//  GithubTest
//
//  Created by Jeff Hellman on 10/18/13.
//  Copyright (c) 2013 Jeff Hellman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
