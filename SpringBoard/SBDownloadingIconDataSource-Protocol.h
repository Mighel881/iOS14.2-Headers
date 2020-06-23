//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBLeafIconDataSource-Protocol.h>

@class NSString;

@protocol SBDownloadingIconDataSource <SBLeafIconDataSource>
@property(readonly, nonatomic, getter=isCloudDemoted) _Bool cloudDemoted;
@property(readonly, nonatomic, getter=isPrioritizable) _Bool prioritizable;
@property(readonly, nonatomic, getter=isDownloading) _Bool downloading;
@property(readonly, nonatomic, getter=isInstalling) _Bool installing;
@property(readonly, nonatomic, getter=isCancelable) _Bool cancelable;
@property(readonly, nonatomic, getter=isFailed) _Bool failed;
@property(readonly, nonatomic, getter=isPausable) _Bool pausable;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic, getter=isWaiting) _Bool waiting;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, copy, nonatomic) NSString *applicationDisplayName;
@property(readonly, copy, nonatomic) NSString *applicationBundleID;
- (_Bool)cancel;
- (_Bool)resume;
- (_Bool)pause;
- (_Bool)prioritize;

@optional
@property(readonly, nonatomic) Class iconClass;
@end

