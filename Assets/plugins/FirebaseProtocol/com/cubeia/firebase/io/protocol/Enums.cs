// I AM AUTO-GENERATED, DON'T CHECK ME INTO SUBVERSION (or else...)

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Net;
using Styx;

namespace com.cubeia.firebase.io.protocol
{

public class Enums {
    private Enums() {}

    public enum ParameterType { STRING, INT, DATE };

    public static ParameterType makeParameterType(int value) {
        switch(value) {
            case 0: return ParameterType.STRING;
            case 1: return ParameterType.INT;
            case 2: return ParameterType.DATE;
            default: throw new ArgumentOutOfRangeException("Invalid enum value for ParameterType: " + value);
        }
    }

    public enum ParameterFilter { EQUALS, GREATER_THAN, SMALLER_THAN, EQUALS_OR_GREATER_THAN, EQUALS_OR_SMALLER_THAN };

    public static ParameterFilter makeParameterFilter(int value) {
        switch(value) {
            case 0: return ParameterFilter.EQUALS;
            case 1: return ParameterFilter.GREATER_THAN;
            case 2: return ParameterFilter.SMALLER_THAN;
            case 3: return ParameterFilter.EQUALS_OR_GREATER_THAN;
            case 4: return ParameterFilter.EQUALS_OR_SMALLER_THAN;
            default: throw new ArgumentOutOfRangeException("Invalid enum value for ParameterFilter: " + value);
        }
    }

    public enum LobbyType { REGULAR, MTT };

    public static LobbyType makeLobbyType(int value) {
        switch(value) {
            case 0: return LobbyType.REGULAR;
            case 1: return LobbyType.MTT;
            default: throw new ArgumentOutOfRangeException("Invalid enum value for LobbyType: " + value);
        }
    }

    public enum TournamentAttributes { NAME, CAPACITY, REGISTERED, ACTIVE_PLAYERS, STATUS };

    public static TournamentAttributes makeTournamentAttributes(int value) {
        switch(value) {
            case 0: return TournamentAttributes.NAME;
            case 1: return TournamentAttributes.CAPACITY;
            case 2: return TournamentAttributes.REGISTERED;
            case 3: return TournamentAttributes.ACTIVE_PLAYERS;
            case 4: return TournamentAttributes.STATUS;
            default: throw new ArgumentOutOfRangeException("Invalid enum value for TournamentAttributes: " + value);
        }
    }

    public enum ServiceIdentifier { NAMESPACE, CONTRACT };

    public static ServiceIdentifier makeServiceIdentifier(int value) {
        switch(value) {
            case 0: return ServiceIdentifier.NAMESPACE;
            case 1: return ServiceIdentifier.CONTRACT;
            default: throw new ArgumentOutOfRangeException("Invalid enum value for ServiceIdentifier: " + value);
        }
    }

    public enum PlayerStatus { CONNECTED, WAITING_REJOIN, DISCONNECTED, LEAVING, TABLE_LOCAL, RESERVATION };

    public static PlayerStatus makePlayerStatus(int value) {
        switch(value) {
            case 0: return PlayerStatus.CONNECTED;
            case 1: return PlayerStatus.WAITING_REJOIN;
            case 2: return PlayerStatus.DISCONNECTED;
            case 3: return PlayerStatus.LEAVING;
            case 4: return PlayerStatus.TABLE_LOCAL;
            case 5: return PlayerStatus.RESERVATION;
            default: throw new ArgumentOutOfRangeException("Invalid enum value for PlayerStatus: " + value);
        }
    }

    public enum ResponseStatus { OK, FAILED, DENIED };

    public static ResponseStatus makeResponseStatus(int value) {
        switch(value) {
            case 0: return ResponseStatus.OK;
            case 1: return ResponseStatus.FAILED;
            case 2: return ResponseStatus.DENIED;
            default: throw new ArgumentOutOfRangeException("Invalid enum value for ResponseStatus: " + value);
        }
    }

    public enum JoinResponseStatus { OK, FAILED, DENIED };

    public static JoinResponseStatus makeJoinResponseStatus(int value) {
        switch(value) {
            case 0: return JoinResponseStatus.OK;
            case 1: return JoinResponseStatus.FAILED;
            case 2: return JoinResponseStatus.DENIED;
            default: throw new ArgumentOutOfRangeException("Invalid enum value for JoinResponseStatus: " + value);
        }
    }

    public enum WatchResponseStatus { OK, FAILED, DENIED, DENIED_ALREADY_SEATED };

    public static WatchResponseStatus makeWatchResponseStatus(int value) {
        switch(value) {
            case 0: return WatchResponseStatus.OK;
            case 1: return WatchResponseStatus.FAILED;
            case 2: return WatchResponseStatus.DENIED;
            case 3: return WatchResponseStatus.DENIED_ALREADY_SEATED;
            default: throw new ArgumentOutOfRangeException("Invalid enum value for WatchResponseStatus: " + value);
        }
    }

    public enum FilteredJoinResponseStatus { OK, FAILED, DENIED, SEATING, WAIT_LIST };

    public static FilteredJoinResponseStatus makeFilteredJoinResponseStatus(int value) {
        switch(value) {
            case 0: return FilteredJoinResponseStatus.OK;
            case 1: return FilteredJoinResponseStatus.FAILED;
            case 2: return FilteredJoinResponseStatus.DENIED;
            case 3: return FilteredJoinResponseStatus.SEATING;
            case 4: return FilteredJoinResponseStatus.WAIT_LIST;
            default: throw new ArgumentOutOfRangeException("Invalid enum value for FilteredJoinResponseStatus: " + value);
        }
    }

    public enum TournamentRegisterResponseStatus { OK, FAILED, DENIED, DENIED_LOW_FUNDS, DENIED_MTT_FULL, DENIED_NO_ACCESS, DENIED_ALREADY_REGISTERED, DENIED_TOURNAMENT_RUNNING };

    public static TournamentRegisterResponseStatus makeTournamentRegisterResponseStatus(int value) {
        switch(value) {
            case 0: return TournamentRegisterResponseStatus.OK;
            case 1: return TournamentRegisterResponseStatus.FAILED;
            case 2: return TournamentRegisterResponseStatus.DENIED;
            case 3: return TournamentRegisterResponseStatus.DENIED_LOW_FUNDS;
            case 4: return TournamentRegisterResponseStatus.DENIED_MTT_FULL;
            case 5: return TournamentRegisterResponseStatus.DENIED_NO_ACCESS;
            case 6: return TournamentRegisterResponseStatus.DENIED_ALREADY_REGISTERED;
            case 7: return TournamentRegisterResponseStatus.DENIED_TOURNAMENT_RUNNING;
            default: throw new ArgumentOutOfRangeException("Invalid enum value for TournamentRegisterResponseStatus: " + value);
        }
    }

}
}