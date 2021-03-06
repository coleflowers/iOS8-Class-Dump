/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/AEAssetHTMLGenerator.h>

@protocol AEAnnotationPaginationDataSource;
@class NSArray;

@interface AESingleAnnotationHTMLGenerator : AEAssetHTMLGenerator {

	BOOL _citationsAllowed;
	NSArray* _annotations;
	id<AEAnnotationPaginationDataSource> _paginationDataSource;
	unsigned long long _wordLimit;

}

@property (nonatomic,retain) NSArray * annotations;                                                  //@synthesize annotations=_annotations - In the implementation block
@property (assign,getter=areCitationsAllowed,nonatomic) BOOL citationsAllowed;                       //@synthesize citationsAllowed=_citationsAllowed - In the implementation block
@property (assign,nonatomic) id<AEAnnotationPaginationDataSource> paginationDataSource;              //@synthesize paginationDataSource=_paginationDataSource - In the implementation block
@property (assign,nonatomic) unsigned long long wordLimit;                                           //@synthesize wordLimit=_wordLimit - In the implementation block
-(id)chapterTitle;
-(id)excerpt;
-(id)citationIncludingStoreURL:(BOOL)arg1 ;
-(unsigned long long)wordLimit;
-(BOOL)areCitationsAllowed;
-(id<AEAnnotationPaginationDataSource>)paginationDataSource;
-(unsigned long long)characterCountLimitforAnnotation:(id)arg1 ;
-(id)documentString;
-(BOOL)userPublishing:(id)arg1 isLocalGenerationEnabledForStoreId:(id)arg2 ;
-(void)setCitationsAllowed:(BOOL)arg1 ;
-(void)setPaginationDataSource:(id<AEAnnotationPaginationDataSource>)arg1 ;
-(void)setWordLimit:(unsigned long long)arg1 ;
-(NSArray *)annotations;
-(void)dealloc;
-(id)init;
-(id)annotation;
-(void)setAnnotations:(NSArray *)arg1 ;
@end

