/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIButton.h>

@class UIImage;

@interface IMCroppedBackgroundButton : UIButton {

	UIImage* _normalImage;
	UIImage* _highlightedImage;
	UIImage* _disabledImage;
	UIImage* _selectedImage;
	UIEdgeInsets _capInsets;

}

@property (assign,nonatomic) UIEdgeInsets capInsets;                  //@synthesize capInsets=_capInsets - In the implementation block
@property (nonatomic,retain) UIImage * normalImage;                   //@synthesize normalImage=_normalImage - In the implementation block
@property (nonatomic,retain) UIImage * highlightedImage;              //@synthesize highlightedImage=_highlightedImage - In the implementation block
@property (nonatomic,retain) UIImage * disabledImage;                 //@synthesize disabledImage=_disabledImage - In the implementation block
@property (nonatomic,retain) UIImage * selectedImage;                 //@synthesize selectedImage=_selectedImage - In the implementation block
-(void)sharedInit;
-(void)setNormalImage:(UIImage *)arg1 ;
-(void)setDisabledImage:(UIImage *)arg1 ;
-(void)resizeImages;
-(id)imageForSelfWidth:(id)arg1 ;
-(UIImage *)disabledImage;
-(void)setCapInsets:(UIEdgeInsets)arg1 ;
-(UIImage *)normalImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(UIEdgeInsets)capInsets;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(UIImage *)highlightedImage;
-(UIImage *)selectedImage;
-(void)setHighlightedImage:(UIImage *)arg1 ;
-(void)setSelectedImage:(UIImage *)arg1 ;
@end

