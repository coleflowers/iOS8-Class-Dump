/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:31:51 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/EventKit.framework/Support/calaccessd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CADNotificationMonitorInterface
@required
-(void)CADDatabaseGetSharedCalendarInvitationsWithReply:(/*^block*/id)arg1;
-(void)CADCalendarSetClearedFromNotificationCenter:(SCD_Struct_CA1)arg1 error:(/*^block*/id)arg2;
-(void)CADDatabaseGetResourceChanges:(/*^block*/id)arg1;
-(void)CADDatabaseGetInviteReplyNotifications:(/*^block*/id)arg1;
-(void)CADDatabaseGetEventNotificationItems:(/*^block*/id)arg1;
-(void)CADDatabaseGetReminderNotificationItems:(/*^block*/id)arg1;
-(void)CADDatabaseGetInboxRepliedSectionItems:(/*^block*/id)arg1;
-(void)CADEvent:(SCD_Struct_CA1)arg1 setAlertedWithError:(/*^block*/id)arg2;
-(void)CADCalendar:(SCD_Struct_CA1)arg1 setAlertedWithError:(/*^block*/id)arg2;
-(void)CADResourceChange:(SCD_Struct_CA1)arg1 setAlertedWithError:(/*^block*/id)arg2;
-(void)CADInviteReplyNotification:(SCD_Struct_CA1)arg1 setAlertedWithError:(/*^block*/id)arg2;
-(void)CADEventSetInvitationStatus:(int)arg1 forEvent:(SCD_Struct_CA1)arg2 error:(/*^block*/id)arg3;

@end

