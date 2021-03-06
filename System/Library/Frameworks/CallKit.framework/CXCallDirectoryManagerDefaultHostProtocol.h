/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CXCallDirectoryManagerDefaultHostProtocol <NSObject>
@required
-(oneway void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)reloadExtensionWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)getEnabledStatusForExtensionWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)launchCallDirectorySettingsWithReply:(/*^block*/id)arg1;
-(oneway void)setPrioritizedExtensionIdentifiers:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)setEnabled:(BOOL)arg1 forExtensionWithIdentifier:(id)arg2 reply:(/*^block*/id)arg3;
-(oneway void)getExtensionsWithReply:(/*^block*/id)arg1;

@end

