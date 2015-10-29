//
//  SettingsViewController.h
//  ReminderCapstone
//
//  Created by Justin Huntington on 7/6/15.
//  Copyright (c) 2015 CVLCD. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Defines.h"
#import "UserController.h"
#import "User.h"
#import "UserController.h"
#import "UIView+FLKAutoLayout.h"

@interface SettingsViewController : UIViewController

@property (strong, nonatomic) UITableView *tableView;
@property (strong, nonatomic) UITableViewCell *versionCell;
@property (strong, nonatomic) UITableViewCell *privacyCell;
@property (strong, nonatomic) UILabel *privacyText;

@end
