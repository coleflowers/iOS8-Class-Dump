/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <MobileMail/PSHeaderFooterView.h>

@class AccountLinkButton, NSURL;

@interface AccountLinkButtonView : UIView <PSHeaderFooterView> {

	AccountLinkButton* _linkButton;
	NSURL* _helpURL;
	float _height;

}
-(id)initWithSpecifier:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_goToAccountURL;
-(double)preferredHeightForWidth:(double)arg1 ;
@end
