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

@interface SBIconLabelImage : UIImage <SBCountedMapValue> {

	SBIconLabelImageParameters* _parameters;
	CGPoint _maxSizeOffset;

}

@property (nonatomic,copy,readonly) SBIconLabelImageParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) CGPoint maxSizeOffset;                                     //@synthesize maxSizeOffset=_maxSizeOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)checkoutLabelImageForParameters:(id)arg1 ;
+(void)checkinLabelImage:(id)arg1 ;
+(void)applyKerning:(double)arg1 whitespaceKerning:(double)arg2 toAttributedString:(id)arg3 ;
+(CGRect)_rectWithDrawing:(BOOL)arg1 inRect:(CGRect)arg2 fromParameters:(id)arg3 ;
+(CGRect)rectFromParameters:(id)arg1 constrainedToRect:(CGRect)arg2 ;
+(void)drawImageInRect:(CGRect)arg1 fromParameters:(id)arg2 ;
+(id)_parametersWithDefaultStyle:(id)arg1 ;
+(id)_labelImageCountedMap;
+(id)_drawLabelImageForParameters:(id)arg1 ;
-(id)countedMapKey;
-(CGPoint)maxSizeOffset;
-(id)_initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 parameters:(id)arg4 maxSizeOffset:(CGPoint)arg5 ;
-(void)dealloc;
-(NSString *)description;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 ;
-(SBIconLabelImageParameters *)parameters;
@end

