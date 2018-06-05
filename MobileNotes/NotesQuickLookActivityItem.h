/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:43:31 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NotesQuickLookActivityItemDelegate;
@class NSArray;

@interface NotesQuickLookActivityItem : NSObject {

	NSArray* _previewItems;
	unsigned long long _firstItemIndex;
	id<NotesQuickLookActivityItemDelegate> _delegate;

}

@property (nonatomic,retain) NSArray * previewItems;                                              //@synthesize previewItems=_previewItems - In the implementation block
@property (assign,nonatomic) unsigned long long firstItemIndex;                                   //@synthesize firstItemIndex=_firstItemIndex - In the implementation block
@property (assign,nonatomic,__weak) id<NotesQuickLookActivityItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setFirstItemIndex:(unsigned long long)arg1 ;
-(unsigned long long)firstItemIndex;
-(void)setDelegate:(id<NotesQuickLookActivityItemDelegate>)arg1 ;
-(id<NotesQuickLookActivityItemDelegate>)delegate;
-(void)setPreviewItems:(NSArray *)arg1 ;
-(NSArray *)previewItems;
@end

