/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPQuestion.h>

@protocol RAPUserSearch;
@class RAPCommentQuestion, NSArray;

@interface RAPSearchWhichOneQuestion : RAPQuestion {

	RAPCommentQuestion* _commentQuestion;
	NSArray* _selectableSearches;
	id<RAPUserSearch> _selectedSearch;

}

@property (nonatomic,readonly) NSArray * selectableSearches;                      //@synthesize selectableSearches=_selectableSearches - In the implementation block
@property (nonatomic,retain) id<RAPUserSearch> selectedSearch;                    //@synthesize selectedSearch=_selectedSearch - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowCommentQuestion; 
@property (nonatomic,readonly) RAPCommentQuestion * commentQuestion; 
-(RAPCommentQuestion *)commentQuestion;
-(void)_fillSubmittableProblem:(id)arg1 ;
-(BOOL)shouldShowCommentQuestion;
-(id<RAPUserSearch>)selectedSearch;
-(NSArray *)selectableSearches;
-(void)setSelectedSearch:(id<RAPUserSearch>)arg1 ;
-(BOOL)isComplete;
@end

