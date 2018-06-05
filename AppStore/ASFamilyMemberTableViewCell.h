/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:45:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUITableViewCell.h>

@class UIImage, UIImageView, NSString;

@interface ASFamilyMemberTableViewCell : SKUITableViewCell {

	UIImage* _arrowImage;
	UIImage* _highlightedArrowImage;
	UIImageView* _arrowImageView;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * title; 
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_reloadHighlightState;
@end
