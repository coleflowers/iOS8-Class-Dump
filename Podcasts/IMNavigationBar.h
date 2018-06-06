/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UINavigationBar.h>
#import <Podcasts/IMTopBar.h>

@class NSArray, UIView, UIImage, NSString;

@interface IMNavigationBar : UINavigationBar <IMTopBar> {

	BOOL _bottom;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL bottom;                           //@synthesize bottom=_bottom - In the implementation block
@property (nonatomic,retain) NSArray * leftItems; 
@property (nonatomic,retain) UIView * titleView; 
@property (nonatomic,retain) NSArray * rightItems; 
@property (nonatomic,retain) UIImage * shadowImage; 
-(void)setLeftItems:(id)arg1 rightItems:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)titleView;
-(void)setTitleView:(UIView *)arg1 ;
-(id)backgroundImageForToolbarPosition:(long long)arg1 barMetrics:(long long)arg2 ;
-(void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(BOOL)bottom;
-(void)setBottom:(BOOL)arg1 ;
-(NSArray *)leftItems;
-(NSArray *)rightItems;
-(void)setLeftItems:(NSArray *)arg1 ;
-(void)setRightItems:(NSArray *)arg1 ;
@end

