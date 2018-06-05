/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIImage.h>
#import <SpringBoard/SBCountedMapValue.h>

@class SBIconLabelImageParameters, NSString;

@interface SBIconLabelLegibilityImage : UIImage <SBCountedMapValue> {

	SBIconLabelImageParameters* _parameters;

}

@property (readonly) SBIconLabelImageParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)checkoutLegibilityImageWithLabelImage:(id)arg1 parameters:(id)arg2 ;
+(void)checkinLegibilityImage:(id)arg1 ;
+(double)_strengthForLegibilityStyle:(long long)arg1 ;
+(CGSize)_maxLegibilityImageSizeForLabelSize:(CGSize)arg1 ;
+(CGRect)_legibilityImageRectForLabelImage:(id)arg1 style:(long long)arg2 ;
+(id)_legibilityImagePool;
+(id)_legibilityImageCountedMap;
+(id)_legibilityImageForIconLabelImage:(id)arg1 parameters:(id)arg2 ;
-(id)countedMapKey;
-(id)_initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 parameters:(id)arg4 ;
-(void)dealloc;
-(SBIconLabelImageParameters *)parameters;
@end
