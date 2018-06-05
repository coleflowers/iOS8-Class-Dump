/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <Maps/MainChromeViewControllerBackdropLightness.h>

@protocol AdvisorySheetViewDelegate;
@class NSString, UIView, UILabel, UIButton, UIImage, UITapGestureRecognizer;

@interface AdvisorySheet : UIView <MainChromeViewControllerBackdropLightness> {

	id<AdvisorySheetViewDelegate> _delegate;
	NSString* _title;
	NSString* _subtitle;
	NSString* _buttonTitle;
	NSString* _identifier;
	UIView* _accessoryView;
	id _userInfo;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	double _addedHeight;
	UIButton* _button;
	BOOL _hasSubtitle;
	BOOL _hasButton;
	BOOL _isDimmed;
	BOOL _isUIDark;
	UIImage* _buttonBackgroundNormalDefault;
	UIImage* _buttonBackgroundPressedDefault;
	UIImage* _buttonBackgroundNormalShort;
	UIImage* _buttonBackgroundPressedShort;
	UIView* _bottomLine;
	UIView* _topLine;
	UITapGestureRecognizer* _tapRecognizer;

}

@property (assign,nonatomic,__weak) id<AdvisorySheetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSString * buttonTitle; 
@property (nonatomic,copy) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) UIView * accessoryView; 
@property (nonatomic,retain) id userInfo;                                                //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShowsDimmedDisplay:(BOOL)arg1 animation:(id)arg2 ;
-(void)setBackdropLightness:(long long)arg1 animation:(id)arg2 ;
-(double)heightForTraitCollection:(id)arg1 withWidth:(double)arg2 ;
-(void)incidentalTap:(id)arg1 ;
-(void)_viewTapped:(id)arg1 ;
-(void)refreshStyle;
-(void)_sizeSubtitlesAddedHeightWithWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<AdvisorySheetViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id<AdvisorySheetViewDelegate>)delegate;
-(NSString *)identifier;
-(NSString *)title;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(void)layoutMarginsDidChange;
-(id)textColor;
-(NSString *)subtitle;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(void)setButtonTitle:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(void)_buttonTapped:(id)arg1 ;
@end

