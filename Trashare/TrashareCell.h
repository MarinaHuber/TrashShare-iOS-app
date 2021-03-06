//
//  TrashareCell.h
//  Trashare
//
//  Created by Marina Huber on 11/2/15.
//  Copyright © 2015 The App Academy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import <Foundation/Foundation.h>

@interface TrashareCell : UITableViewCell

+ (NSString *)reuseIdentifier;
@property (nonatomic, weak) IBOutlet UILabel *descriptionLabel;
@property (nonatomic, weak) IBOutlet UIImageView *thumbnailImageView;
@property (copy, nonatomic) void (^actionBlock)(void); //what is this?
@property (nonatomic, weak) IBOutlet UILabel *calculateText;

@end
