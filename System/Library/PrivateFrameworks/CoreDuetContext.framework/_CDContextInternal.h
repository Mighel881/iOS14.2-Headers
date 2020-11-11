/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _CDContextInternal <_CDLocalContext>
@required
-(id)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtKeyPath:(id)arg2 removedObjects:(id*)arg3;
-(id)setObject:(id)arg1 returningMetadataForContextualKeyPath:(id)arg2;
-(void)setContextValue:(id)arg1 forContextualKeyPath:(id)arg2;
-(id)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 valueDidChange:(BOOL*)arg4;
-(id)propertiesForContextualKeyPath:(id)arg1;

@end
