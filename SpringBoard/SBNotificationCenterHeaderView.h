/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:53 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardFoundation/_SBFVibrantTableViewHeaderFooterView.h>
#import <SpringBoard/SBModalLayoutCaching.h>

@class UILabel, UIImageView, SBNotificationsClearButton, NSString;

@interface SBNotificationCenterHeaderView : _SBFVibrantTableViewHeaderFooterView <SBModalLayoutCaching> {

	UILabel* _titleLabel;
	UIImageView* _iconImageView;
	SBNotificationsClearButton* _clearButton;
	/*^block*/id _xAction;
	/*^block*/id _clearAction;
	BOOL _showingClear;
	long long _layoutMode;

}

@property (nonatomic,readonly) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long layoutMode;                       //@synthesize layoutMode=_layoutMode - In the implementation block
+(double)_titleBaseline;
+(id)titleFont;
-(void)_removeClearButton;
-(void)_addClearButton;
-(void)resetAnimated:(BOOL)arg1 ;
-(CGRect)_clearButtonFrame;
-(void)setLayoutMode:(long long)arg1 ;
-(void)setHasClearButton:(BOOL)arg1 ;
-(void)setTarget:(id)arg1 forClearButtonVisibleAction:(/*^block*/id)arg2 ;
-(void)setTarget:(id)arg1 forClearButtonAction:(/*^block*/id)arg2 ;
-(CGRect)contentBounds;
-(UIImageView *)iconImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setBackgroundView:(id)arg1 ;
-(long long)layoutMode;
-(long long)initialGraphicsQuality;
-(void)buttonAction:(id)arg1 ;
@end
