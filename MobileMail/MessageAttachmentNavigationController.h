/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class MessageViewController;

@interface MessageAttachmentNavigationController : UINavigationController {

	MessageViewController* _parentMessageViewController;

}

@property (assign,nonatomic) MessageViewController * parentMessageViewController;              //@synthesize parentMessageViewController=_parentMessageViewController - In the implementation block
-(MessageViewController *)parentMessageViewController;
-(void)setParentMessageViewController:(MessageViewController *)arg1 ;
-(void)presentModalViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
@end

