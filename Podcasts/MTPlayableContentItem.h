/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPContentItem, NSString, NSArray, NSPredicate, UIImage;

@interface MTPlayableContentItem : NSObject {

	MPContentItem* _contentItem;
	NSString* _itemEntityName;
	BOOL _container;
	BOOL _playable;
	float _playbackProgress;
	NSString* _identifier;
	NSString* _title;
	NSString* _subtitle;
	NSArray* _children;
	NSPredicate* _predicate;
	NSString* _queryEntityName;
	NSArray* _sortDescriptors;
	NSString* _artworkCacheKey;
	UIImage* _image;

}

@property (nonatomic,readonly) MPContentItem * contentItem; 
@property (nonatomic,retain) NSArray * children;                             //@synthesize children=_children - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                        //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSString * itemEntityName;                      //@synthesize itemEntityName=_itemEntityName - In the implementation block
@property (nonatomic,retain) NSString * queryEntityName;                     //@synthesize queryEntityName=_queryEntityName - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                      //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * artworkCacheKey;                     //@synthesize artworkCacheKey=_artworkCacheKey - In the implementation block
@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (assign,getter=isContainer,nonatomic) BOOL container;              //@synthesize container=_container - In the implementation block
@property (assign,getter=isPlayable,nonatomic) BOOL playable;                //@synthesize playable=_playable - In the implementation block
@property (assign,nonatomic) float playbackProgress;                         //@synthesize playbackProgress=_playbackProgress - In the implementation block
+(id)_placeholderArtwork;
-(void)setArtworkCacheKey:(NSString *)arg1 ;
-(void)setArtworkOnContentItem;
-(NSString *)artworkCacheKey;
-(MPContentItem *)contentItem;
-(void)updateContentItem;
-(NSString *)itemEntityName;
-(void)setItemEntityName:(NSString *)arg1 ;
-(NSString *)queryEntityName;
-(void)setQueryEntityName:(NSString *)arg1 ;
-(BOOL)isPlayable;
-(float)playbackProgress;
-(void)setPlayable:(BOOL)arg1 ;
-(void)setPlaybackProgress:(float)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)identifier;
-(NSString *)title;
-(UIImage *)image;
-(void)setContainer:(BOOL)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)isContainer;
-(void)setChildren:(NSArray *)arg1 ;
-(NSArray *)children;
@end

