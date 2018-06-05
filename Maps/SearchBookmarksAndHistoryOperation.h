/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol SearchBookmarksAndHistoryOperationDelegate;
@class NSString, NSArray;

@interface SearchBookmarksAndHistoryOperation : NSOperation {

	void* _addressBook;
	NSString* _searchQuery;
	int _searchMode;
	NSArray* _history;
	NSArray* _bookmarks;
	BOOL _abAllowed;
	id<SearchBookmarksAndHistoryOperationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SearchBookmarksAndHistoryOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSearchQuery:(id)arg1 searchMode:(int)arg2 addressBook:(void*)arg3 bookmarks:(id)arg4 history:(id)arg5 ;
-(id)_bookmarksAndHistoryResultsForSearchQuery:(id)arg1 searchMode:(int)arg2 ;
-(void)_addCompletionString:(id)arg1 toCompletions:(id)arg2 query:(id)arg3 ;
-(BOOL)_removeCompletionString:(id)arg1 fromCompletions:(id)arg2 query:(id)arg3 ;
-(void)dealloc;
-(void)setDelegate:(id<SearchBookmarksAndHistoryOperationDelegate>)arg1 ;
-(id<SearchBookmarksAndHistoryOperationDelegate>)delegate;
-(void)main;
@end
