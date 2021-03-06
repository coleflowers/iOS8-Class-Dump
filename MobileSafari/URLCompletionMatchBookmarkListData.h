/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/WBSURLCompletionMatchData.h>

@class NSMutableArray, WBSHistoryItem, NSString;

@interface URLCompletionMatchBookmarkListData : NSObject <WBSURLCompletionMatchData> {

	NSMutableArray* _bookmarks;
	WBSHistoryItem* _historyItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * originalURLString; 
@property (nonatomic,readonly) BOOL containsBookmark; 
@property (nonatomic,readonly) double lastVisitedTimeInterval; 
@property (nonatomic,readonly) BOOL lastVisitWasFailure; 
-(id)initWithBookmark:(id)arg1 andBookmark:(id)arg2 ;
-(id)initWithBookmark:(id)arg1 historyItem:(id)arg2 ;
-(id)_bookmarkUserVisibleURLString;
-(id)_historyItemUserVisibleURLString;
-(id)_historyItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)lastVisitWasFailure;
-(id)bookmark;
-(id)pageTitleAtIndex:(unsigned long long)arg1 ;
-(id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1 ;
-(NSString *)originalURLString;
-(BOOL)containsBookmark;
-(id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1 ;
-(id)userVisibleURLStringAtIndex:(unsigned long long)arg1 ;
-(double)lastVisitedTimeInterval;
-(void)enumeratePageTitlesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateUserVisibleURLsUsingBlock:(/*^block*/id)arg1 ;
-(float)topSitesScoreForPageTitleAtIndex:(unsigned long long)arg1 atTime:(double)arg2 ;
-(float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2 ;
-(id)matchDataByMergingWithMatchData:(id)arg1 ;
-(BOOL)matchesAutocompleteTrigger:(id)arg1 ;
@end

