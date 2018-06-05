/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 5:31:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <Weather/WACardLayout.h>

@class NSIndexPath;

@interface WATransitionCardLayout : WACardLayout {

	double _pivotHeight;
	NSIndexPath* _pivotIndexPath;

}

@property (nonatomic,retain) NSIndexPath * pivotIndexPath;              //@synthesize pivotIndexPath=_pivotIndexPath - In the implementation block
-(NSIndexPath *)pivotIndexPath;
-(void)setPivotIndexPath:(NSIndexPath *)arg1 ;
-(CGRect)frameForItem:(long long)arg1 ;
-(void)dealloc;
-(void)prepareLayout;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
@end

