/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/FavoriteItem.h>

@interface FavoriteItem_SharedMailbox : FavoriteItem {

	unsigned long long _sourceType;

}

@property (nonatomic,readonly) unsigned long long sourceType;              //@synthesize sourceType=_sourceType - In the implementation block
-(void)wasSelected:(id)arg1 accessoryTapped:(BOOL)arg2 ;
-(id)persistentIdForMigration;
-(id)defaultIcon;
-(id)initWithSourceType:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isVisible;
-(id)dictionaryRepresentation;
-(unsigned long long)sourceType;
-(id)displayName;
-(void)configureCell:(id)arg1 ;
@end

