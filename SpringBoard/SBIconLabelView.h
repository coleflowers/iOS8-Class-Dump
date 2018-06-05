/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UILegibilityView.h>

@class SBIconLabelImageParameters;

@interface SBIconLabelView : _UILegibilityView {

	SBIconLabelImageParameters* _imageParameters;

}

@property (nonatomic,retain) SBIconLabelImageParameters * imageParameters;              //@synthesize imageParameters=_imageParameters - In the implementation block
+(void)updateIconLabelView:(id)arg1 withSettings:(id)arg2 imageParameters:(id)arg3 ;
+(id)newIconLabelViewWithSettings:(id)arg1 imageParameters:(id)arg2 ;
-(SBIconLabelImageParameters *)imageParameters;
-(void)_checkInImages;
-(void)setImageParameters:(SBIconLabelImageParameters *)arg1 ;
-(void)dealloc;
@end

