/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MTLibraryMigrator : NSObject
+(BOOL)runCoreDataMigration;
+(void)runDataMigration;
+(BOOL)needsDataMigration;
+(void)migrateSettingsForVersion:(unsigned long long)arg1 ;
+(void)migratePlaylistDefaultsForVersion7to8;
+(void)runMigrationOnEpisodesByPodcastForVersion:(long long)arg1 ;
+(void)recalculateAllPlaylists;
+(void)touchMigrationVersion;
+(void)migrateSettingDefaultsForVersion6to7;
+(void)migrateSettingDefaultsForVersion9to10;
+(void)migrateSettingDefaultsForVersion10to11;
+(int)episodesToKeepDefaultValue;
+(long long)episodesToKeepToEpisodeLimit:(int)arg1 ;
+(BOOL)runMigrationForPodcast:(id)arg1 version:(long long)arg2 ;
+(void)episodeMigrationForVersion0to1:(id)arg1 ;
+(void)episodeMigrationForVersion6to7:(id)arg1 ;
+(void)podcastMigrationForVersion6to7:(id)arg1 ;
+(BOOL)podcastMigrationForVersion8to9:(id)arg1 ;
+(void)podcastMigrationForVersion9to10:(id)arg1 ;
+(void)podcastMigrationForVersion11to12:(id)arg1 ;
+(BOOL)isMomCompatible:(id)arg1 ;
+(BOOL)isNewInstall;
+(void)fixCraigsIncompetenceIfNeeded;
+(BOOL)needsCoreDataMigration;
+(BOOL)hasCorruptDB;
+(BOOL)_createPersistentStoreForModel:(id)arg1 attemptMigration:(BOOL)arg2 ;
+(long long)dataVersion;
+(void)setDataVersion:(long long)arg1 ;
+(BOOL)needsMigration;
@end
