//
//  CLAboutUsViewController.h
//  Clocker
//
//  Created by Abhishek Banthia on 12/12/15.
//
//

#import <Cocoa/Cocoa.h>
#import "CLAppFeedbackWindowController.h"

@interface CLAboutUsViewController : NSViewController

@property (strong, nonatomic) CLAppFeedbackWindowController *feedbackWindow;
@property (weak) IBOutlet NSTextField *versionField;

@end
