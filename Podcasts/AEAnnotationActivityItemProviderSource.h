/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/AEAssetActivityItemProviderSource.h>

@protocol AEAnnotationPaginationDataSource;
@class NSArray;

@interface AEAnnotationActivityItemProviderSource : AEAssetActivityItemProviderSource {

	BOOL _citationsAllowed;
	NSArray* _annotations;
	id<AEAnnotationPaginationDataSource> _paginationDataSource;

}

@property (nonatomic,retain,readonly) NSArray * annotations;                                         //@synthesize annotations=_annotations - In the implementation block
@property (assign,nonatomic) id<AEAnnotationPaginationDataSource> paginationDataSource;              //@synthesize paginationDataSource=_paginationDataSource - In the implementation block
@property (assign,getter=areCitationAllowed,nonatomic) BOOL citationsAllowed;                        //@synthesize citationsAllowed=_citationsAllowed - In the implementation block
+(unsigned long long)citationWordCountLimit;
+(id)activityItemProviderSourceWithAnnotations:(id)arg1 propertySource:(/*^block*/id)arg2 ;
-(id)initWithAnnotations:(id)arg1 propertySource:(/*^block*/id)arg2 ;
-(id)copyrightCitation;
-(NSRange)annotationsPageRange;
-(BOOL)areCitationAllowed;
-(id<AEAnnotationPaginationDataSource>)paginationDataSource;
-(id)chapterTitleForAnnotation:(id)arg1 ;
-(void)setCitationsAllowed:(BOOL)arg1 ;
-(void)setPaginationDataSource:(id<AEAnnotationPaginationDataSource>)arg1 ;
-(NSArray *)annotations;
-(void)dealloc;
-(id)text;
@end

