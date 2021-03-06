/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIActivityIndicatorView, UIImage, NSString;

@interface MNGuidanceCurrentRoadSign : UIView {

	BOOL _shouldShowSpinner;
	UIImageView* _backgroundView;
	UILabel* _label;
	UIActivityIndicatorView* _activityView;
	UIImageView* _dimmingView;
	UIImage* _backgroundImage;
	UIImage* _noLocationBackgroundImage;
	long long _idiom;
	BOOL _dimmed;

}

@property (assign,nonatomic) BOOL shouldShowSpinner;                   //@synthesize shouldShowSpinner=_shouldShowSpinner - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,getter=isDimmed,nonatomic) BOOL dimmed;              //@synthesize dimmed=_dimmed - In the implementation block
+(id)signImageForIdiom:(long long)arg1 ;
+(id)signImageNoLocationForIdiom:(long long)arg1 ;
+(id)signImageDimmingForIdiom:(long long)arg1 ;
-(id)_activityView;
-(BOOL)shouldShowSpinner;
-(void)setShouldShowSpinner:(BOOL)arg1 ;
-(id)_noLocationBackgroundImage;
-(id)initWithFrame:(CGRect)arg1 idiom:(long long)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)isDimmed;
@end

