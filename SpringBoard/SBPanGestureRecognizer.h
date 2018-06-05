/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBFluidSlideGestureRecognizer.h>

@interface SBPanGestureRecognizer : SBFluidSlideGestureRecognizer {

	double _arcCenter;
	double _arcSize;
	BOOL _recognizesHorizontalPanning;
	BOOL _recognizesVerticalPanning;

}
-(double)computeIncrementalGestureMotion:(SBGestureContextRef)arg1 ;
-(void)updateForBeganOrMovedTouches:(SBGestureContextRef)arg1 ;
-(id)initForHorizontalPanning;
-(id)initForVerticalPanning;
-(id)init;
@end

