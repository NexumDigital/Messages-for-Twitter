//
//  NexumProfileViewController.h
//  Twitter iOS 1.0
//
//  Created by Cristian Castillo on 11/14/13.
//  Copyright (c) 2013 NexumDigital Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NexumProfileCell.h"
#import "NexumThreadViewController.h"

@interface NexumProfileViewController : UITableViewController <UIActionSheetDelegate>

@property (strong, nonatomic) NSDictionary *profile;
@property (assign, nonatomic) BOOL isChildOfThread;

@property (strong, nonatomic) IBOutlet UIImageView *back;
@property (strong, nonatomic) IBOutlet UIView *mainPlaceholder;
@property (strong, nonatomic) IBOutlet UIView *infoPlaceholder;
@property (strong, nonatomic) IBOutlet UIImageView *picture;
@property (strong, nonatomic) IBOutlet UIImageView *badge;
@property (strong, nonatomic) IBOutlet UILabel *username;
@property (strong, nonatomic) IBOutlet UILabel *description;

@property (weak, nonatomic) IBOutlet UIView *activityRow;

@property (strong, nonatomic) IBOutlet UIButton *actionButton;
@property (strong, nonatomic) IBOutlet UIButton *followingButton;
@property (strong, nonatomic) IBOutlet UIButton *followersButton;

- (IBAction)optionsAction:(UIBarButtonItem *)sender;
- (IBAction)dinamicAction:(id)sender;
- (IBAction)followingAction:(id)sender;
- (IBAction)followersAction:(id)sender;
- (IBAction)rowButtonAction:(id)sender;

@end
