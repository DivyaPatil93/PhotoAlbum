//
//  ViewController.h
//  DPPhotoAlbum
//
//  Created by Student P_05 on 05/11/16.
//  Copyright © 2016 Divya Patil. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

@interface ViewController : UIViewController<UIImagePickerControllerDelegate,MFMailComposeViewControllerDelegate,MFMessageComposeViewControllerDelegate>

- (IBAction)actionOpencamera:(id)sender;
- (IBAction)actionOpenPhotoAlbum:(id)sender;
- (IBAction)actionMail:(id)sender;
- (IBAction)actionSMS:(id)sender;
@property (strong, nonatomic) IBOutlet UIImageView *myImageView;

@end

