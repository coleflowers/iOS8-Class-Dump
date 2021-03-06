/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:46:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriViewService/SVSStarkGatekeeperHeaderView.h>

@class UIImageView, UILabel, SVSStarkGatekeeperButton;

@interface SVSStarkStandardGatekeeperHeaderView : SVSStarkGatekeeperHeaderView {

	UIImageView* _appIconImageView;
	UILabel* _appNameLabel;
	SVSStarkGatekeeperButton* _dismissalButton;

}

@property (getter=_appIconImageView,nonatomic,readonly) UIImageView * appIconImageView;                         //@synthesize appIconImageView=_appIconImageView - In the implementation block
@property (getter=_appNameLabel,nonatomic,readonly) UILabel * appNameLabel;                                     //@synthesize appNameLabel=_appNameLabel - In the implementation block
@property (getter=_dismissalButton,nonatomic,readonly) SVSStarkGatekeeperButton * dismissalButton;              //@synthesize dismissalButton=_dismissalButton - In the implementation block
-(id)initWithRequestOptions:(id)arg1 ;
-(void)_updateForAppBundleIdentifier;
-(id)_appNameLabel;
-(id)_dismissalButton;
-(id)_starkGatekeeperDismissalTextForBundleId:(id)arg1 ;
-(id)_appIconImageView;
-(id)_iconImageForBundleIdentifier:(id)arg1 ;
-(void)layoutSubviews;
@end

