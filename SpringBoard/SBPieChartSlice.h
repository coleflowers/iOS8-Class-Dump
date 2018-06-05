/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface SBPieChartSlice : NSObject {

	double _value;
	UIColor* _fillColor;

}

@property (readonly) double value;                            //@synthesize value=_value - In the implementation block
@property (retain,readonly) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
+(id)sliceWithValue:(double)arg1 fillColor:(id)arg2 ;
-(id)initWithValue:(double)arg1 fillColor:(id)arg2 ;
-(void)dealloc;
-(double)value;
-(UIColor *)fillColor;
@end

