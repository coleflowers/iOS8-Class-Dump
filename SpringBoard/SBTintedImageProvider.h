/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, CALayer, UIColor;

@interface SBTintedImageProvider : NSObject {

	UIImage* _tintedImage;
	CALayer* _tintedLayer;
	BOOL _wantsTintedLayer;
	UIImage* _originalImage;
	UIColor* _tintColor;

}

@property (nonatomic,retain) UIImage * originalImage;              //@synthesize originalImage=_originalImage - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                  //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) BOOL wantsTintedLayer;                //@synthesize wantsTintedLayer=_wantsTintedLayer - In the implementation block
@property (nonatomic,readonly) UIImage * tintedImage; 
@property (nonatomic,readonly) CALayer * tintedLayer; 
-(void)_createOrUpdateTintedImageOrLayer;
-(CALayer *)tintedLayer;
-(void)setWantsTintedLayer:(BOOL)arg1 ;
-(BOOL)wantsTintedLayer;
-(void)dealloc;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIImage *)tintedImage;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(UIImage *)originalImage;
@end

