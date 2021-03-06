/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 5:31:44 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <Weather/WACardLayout.h>

@class NSIndexPath;

@interface WAReorderableCardLayout : WACardLayout {

	BOOL _isReordering;
	NSIndexPath* _deleteIndexPath;
	NSIndexPath* _pivotIndexPath;
	long long _initialDragIndex;
	long long _currentDragIndex;

}

@property (nonatomic,retain) NSIndexPath * deleteIndexPath;              //@synthesize deleteIndexPath=_deleteIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * pivotIndexPath;               //@synthesize pivotIndexPath=_pivotIndexPath - In the implementation block
@property (nonatomic,readonly) long long initialDragIndex;               //@synthesize initialDragIndex=_initialDragIndex - In the implementation block
@property (assign,nonatomic) long long currentDragIndex;                 //@synthesize currentDragIndex=_currentDragIndex - In the implementation block
-(NSIndexPath *)pivotIndexPath;
-(void)setPivotIndexPath:(NSIndexPath *)arg1 ;
-(long long)targetIndexForProposedStartIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(long long)currentDragIndex;
-(long long)indexForItemAtPoint:(CGPoint)arg1 ;
-(void)setCurrentDragIndex:(long long)arg1 ;
-(void)beginReorderingWithInitialDragIndex:(long long)arg1 ;
-(long long)initialDragIndex;
-(void)setDeleteIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)deleteIndexPath;
-(BOOL)isReordering;
-(void)endReordering;
-(void)dealloc;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
@end

