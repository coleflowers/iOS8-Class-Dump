/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MailboxContentViewCell.h>

@class UIActivityIndicatorView, UIButton;

@interface OutboxContentViewCell : MailboxContentViewCell {

	UIActivityIndicatorView* _activityIndicator;
	UIButton* _errorButton;
	unsigned _inDelivery : 1;

}
+(double)marginWidthEditing:(BOOL)arg1 ;
+(double)contentLeftInsetEditing:(BOOL)arg1 ;
-(void)updateFlagsFromMessage:(id)arg1 ;
-(void)layoutStatusIndicatorViews;
-(void)_errorButtonPressed:(id)arg1 ;
-(void)dealloc;
@end

