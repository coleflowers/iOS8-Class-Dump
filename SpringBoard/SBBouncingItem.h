/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIDynamicItem.h>

@class NSString;

@interface SBBouncingItem : NSObject <UIDynamicItem> {

	CGRect _bounds;
	CGPoint _center;
	double _multiplier;
	/*^block*/id _translateBlock;

}

@property (assign) double multiplier;                                  //@synthesize multiplier=_multiplier - In the implementation block
@property (copy) id translateBlock;                                    //@synthesize translateBlock=_translateBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGPoint center; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform; 
-(void)setTranslateBlock:(id)arg1 ;
-(id)translateBlock;
-(void)setMultiplier:(double)arg1 ;
-(void)dealloc;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGPoint)center;
-(CGAffineTransform)transform;
-(void)setCenter:(CGPoint)arg1 ;
-(double)multiplier;
@end

