/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/IMActivity.h>
#import <Podcasts/MFMailComposeViewControllerDelegate.h>

@class MFMailComposeViewController, NSString;

@interface IMActivityMail : IMActivity <MFMailComposeViewControllerDelegate> {

	MFMailComposeViewController* _mailViewController;

}

@property (nonatomic,retain) MFMailComposeViewController * mailViewController;              //@synthesize mailViewController=_mailViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canPerformActivityItems:(id)arg1 ;
-(void)setMailViewController:(MFMailComposeViewController *)arg1 ;
-(MFMailComposeViewController *)mailViewController;
-(void)dealloc;
-(id)activityType;
-(id)activityTitle;
-(id)activityViewController;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
@end

