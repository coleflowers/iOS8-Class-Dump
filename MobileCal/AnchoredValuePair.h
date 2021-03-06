/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:52:29 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AnchoredValuePair : NSObject {

	BOOL _layoutShift;
	double _value;
	double _size;

}

@property (assign,nonatomic) double value;                  //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double size;                   //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL layoutShift;              //@synthesize layoutShift=_layoutShift - In the implementation block
+(id)pairWithValue:(double)arg1 size:(double)arg2 layoutShift:(BOOL)arg3 ;
-(id)initWithValue:(double)arg1 size:(double)arg2 layoutShift:(BOOL)arg3 ;
-(BOOL)layoutShift;
-(void)setLayoutShift:(BOOL)arg1 ;
-(double)size;
-(id)description;
-(void)setValue:(double)arg1 ;
-(void)setSize:(double)arg1 ;
-(double)value;
@end

