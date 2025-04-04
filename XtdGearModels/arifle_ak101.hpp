    class arifle_ak101 {
      label = "AK-101";
      author = "TAW";
      options[] = {"rail"};
      class rail {
        label = "Rail";
        values[] = {"side", "top"};
        changeingame = 1;
        class side {label = "Side"; itemingame = ""; actionlabel = "Remove Rail Adapter (Remove scope first!)";};
        class top {label = "Top"; itemingame = "rhs_acc_npz"; actionlabel = "Add Rail Adapter (Remove scope first!)";};
      };
    };