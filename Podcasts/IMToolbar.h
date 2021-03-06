/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIToolbar.h>
#import <Podcasts/IMTopBar.h>

@class NSArray, UIView, UIBarButtonItem, UIImage, UIImageView, NSString;

@interface IMToolbar : UIToolbar <IMTopBar> {

	BOOL _bottom;
	NSArray* _leftItems;
	UIView* _titleView;
	NSArray* _rightItems;
	UIBarButtonItem* _titleViewBarButtonItem;
	UIImage* _backgroundImage;
	UIImage* _miniBackgroundImage;
	UIImage* _backgroundImageBottom;
	UIImage* _miniBackgroundImageBottom;
	UIImage* _shadowImage;
	UIImageView* _shadow;

}

@property (nonatomic,retain) UIImage * backgroundImage;                        //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * miniBackgroundImage;                    //@synthesize miniBackgroundImage=_miniBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImageBottom;                  //@synthesize backgroundImageBottom=_backgroundImageBottom - In the implementation block
@property (nonatomic,retain) UIImage * miniBackgroundImageBottom;              //@synthesize miniBackgroundImageBottom=_miniBackgroundImageBottom - In the implementation block
@property (nonatomic,readonly) BOOL mini; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL bottom;                                      //@synthesize bottom=_bottom - In the implementation block
@property (nonatomic,retain) NSArray * leftItems;                              //@synthesize leftItems=_leftItems - In the implementation block
@property (nonatomic,retain) UIView * titleView;                               //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) NSArray * rightItems;                             //@synthesize rightItems=_rightItems - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                            //@synthesize shadowImage=_shadowImage - In the implementation block
-(void)setLeftItems:(id)arg1 rightItems:(id)arg2 ;
-(void)_updateControlMiniState;
-(CGRect)_centerFrame;
-(void)layoutShadow;
-(BOOL)mini;
-(id)_toolbarItemSubviews;
-(void)setBackgroundImageBottom:(UIImage *)arg1 ;
-(void)setMiniBackgroundImageBottom:(UIImage *)arg1 ;
-(UIImage *)backgroundImageBottom;
-(UIImage *)miniBackgroundImageBottom;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImage *)backgroundImage;
-(UIImage *)miniBackgroundImage;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(UIView *)titleView;
-(void)setTitleView:(UIView *)arg1 ;
-(id)backgroundImageForToolbarPosition:(long long)arg1 barMetrics:(long long)arg2 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setMiniBackgroundImage:(UIImage *)arg1 ;
-(void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(void)_updateItems;
-(BOOL)bottom;
-(void)setBottom:(BOOL)arg1 ;
-(NSArray *)leftItems;
-(NSArray *)rightItems;
-(void)setLeftItems:(NSArray *)arg1 ;
-(void)setRightItems:(NSArray *)arg1 ;
@end

